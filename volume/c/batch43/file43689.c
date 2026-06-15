// fichero 43689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43689;

Registro43689 crear_registro43689(int id) {
    Registro43689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
