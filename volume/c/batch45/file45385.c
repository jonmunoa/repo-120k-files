// fichero 45385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45385;

Registro45385 crear_registro45385(int id) {
    Registro45385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
