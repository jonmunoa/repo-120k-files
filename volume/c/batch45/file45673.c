// fichero 45673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45673;

Registro45673 crear_registro45673(int id) {
    Registro45673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
