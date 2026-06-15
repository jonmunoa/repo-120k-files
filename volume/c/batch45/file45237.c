// fichero 45237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45237;

Registro45237 crear_registro45237(int id) {
    Registro45237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
