cat /etc/passwd | grep -v '^#' | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,/, /g; s/, $/./'

*//cat /etc/passwd → muestra el fichero.

grep -v '^#' → quita comentarios.

sed -n 'n;p' → muestra solo una de cada dos líneas (las pares).

cut -d: -f1 → se queda solo con el nombre de usuario.

rev → invierte cada nombre.

sort -r → ordena en orden alfabético inverso.

sed -n "${FT_LINE1},${FT_LINE2}p" → filtra solo las líneas entre FT_LINE1 y FT_LINE2.

tr '\n' ',' → convierte saltos de línea en comas.

sed 's/,/, /g; s/, $/./' → pone espacios después de cada coma y termina en .\\*
