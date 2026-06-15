// fichero 45125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45125;

Registro45125 crear_registro45125(int id) {
    Registro45125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
