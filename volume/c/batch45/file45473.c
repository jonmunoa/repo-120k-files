// fichero 45473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45473;

Registro45473 crear_registro45473(int id) {
    Registro45473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
