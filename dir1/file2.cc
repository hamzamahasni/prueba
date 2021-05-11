/*
aasdadasda
        String cadena="UPDATE empleado SET nombre='Hamza' WHERE codigo=?";
        String cadena2="INSERT INTO empleado (nombre,codigo,nif,apellido1) VALUES(?,?,?,?)";
        String cadena3="DELETE FROM empleado where codigo=?"; 
       
        //Declarar un statement
        PreparedStatement instruccion = conexion.prepareStatement(cadena); 
        PreparedStatement instruccion2 = conexion.prepareStatement(cadena2); 
        PreparedStatement instruccion3 = conexion.prepareStatement(cadena3); 
        
        instruccion.setInt(1, 1);
        instruccion2.setString(1, "Hector");
        instruccion2.setInt(1, 1000);
        instruccion2.setString(1, "51");
        instruccion2.setString(1, "Garcia");
        instruccion3.setInt(1, 3);
                
        instruccion.executeUpdate(); 
        instruccion2.executeUpdate();
        instruccion3.executeUpdate();
        //Ejecutar una instrucción
        ResultSet tabla; 
        tabla= instruccion.executeQuery("SELECT codigo, nombre FROM empleado"); 
        
        
        //Tratamiento de los datos recuperados en la select
        System.out.println("Codigo\tNombre"); 
        while(tabla.next()) {
                   System.out.println(tabla.getInt("codigo")+"\t"+tabla.getString(2)); 
        }
        tabla.close(); 

        //Cierre del statement
        instruccion.close(); 

        //Cierre de la conexión
        conexion.close(); 

            //Tratamiento de las excepciones
        }   catch(ClassNotFoundException e) { 
            System.out.println(e); 
        }  catch(SQLException e) { 
            System.out.println(e); 
        }  catch(Exception e) { 
            System.out.println(e); 
        } 
    } 
}