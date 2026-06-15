// fichero 5209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5209;

Registro5209 crear_registro5209(int id) {
    Registro5209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
