// fichero 23541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23541;

Registro23541 crear_registro23541(int id) {
    Registro23541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
