// fichero 45465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45465;

Registro45465 crear_registro45465(int id) {
    Registro45465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
