FROM gcc:latest

# Establecer directorio de trabajo
WORKDIR /app

# Copiar todos los archivos al contenedor
COPY . .

# Compilar la aplicación
RUN make all

# Ejecutar el binario resultante
ENTRYPOINT ["./app"]
