// fichero 42081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42081;

Registro42081 crear_registro42081(int id) {
    Registro42081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
