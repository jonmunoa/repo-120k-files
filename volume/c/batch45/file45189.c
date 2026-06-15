// fichero 45189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45189;

Registro45189 crear_registro45189(int id) {
    Registro45189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
