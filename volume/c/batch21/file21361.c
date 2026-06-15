// fichero 21361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21361;

Registro21361 crear_registro21361(int id) {
    Registro21361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
