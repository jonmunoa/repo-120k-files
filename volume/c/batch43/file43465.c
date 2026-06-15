// fichero 43465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43465;

Registro43465 crear_registro43465(int id) {
    Registro43465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
