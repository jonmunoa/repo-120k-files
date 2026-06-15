// fichero 21661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21661;

Registro21661 crear_registro21661(int id) {
    Registro21661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
