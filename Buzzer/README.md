<?xml version="1.0" encoding="UTF-8"?>
<indexing>
 <paragraph index="9" node_type="writer">Libreria para ser usada en el ide ARDUINO o PlatformIO que no genera código bloqueante.</paragraph>
 <paragraph index="10" node_type="writer">Originalmente pensada para correr en un ESP32.</paragraph>
 <paragraph index="11" node_type="writer">Controla un buzzer de frecuencia fija instanciando el objeto con: el pin donde se conectará , el tiempo activado (HIGH = 1), el tiempo desactivado (LOW = 0); según se muestra en el ejemplo Simplebip.ino. La idea es que pueda pasarle al método beep la cantidad de veces que repetirá el encendido/apagado.</paragraph>
 <paragraph index="12" node_type="writer">Ejemplo buzzer.beep(2); -&gt; hará que el buzzer suene dos veces en el pin y con los tiempos ON y OFF instanciados en el objeto creado buzzer a partir de la Clase Buzzer.</paragraph>
 <paragraph index="13" node_type="writer">Es necesario que dentro de la ejecución del programa se invoque un buzzer.update(); a fin de &quot;apagar&quot; efectivamente el evento invocado.</paragraph>
</indexing>
