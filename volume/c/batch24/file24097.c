// fichero 24097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24097;

Registro24097 crear_registro24097(int id) {
    Registro24097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
