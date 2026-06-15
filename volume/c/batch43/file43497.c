// fichero 43497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43497;

Registro43497 crear_registro43497(int id) {
    Registro43497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
