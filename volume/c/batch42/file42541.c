// fichero 42541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42541;

Registro42541 crear_registro42541(int id) {
    Registro42541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
