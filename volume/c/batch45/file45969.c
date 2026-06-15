// fichero 45969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45969;

Registro45969 crear_registro45969(int id) {
    Registro45969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
