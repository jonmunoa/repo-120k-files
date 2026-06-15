// fichero 14525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14525;

Registro14525 crear_registro14525(int id) {
    Registro14525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
