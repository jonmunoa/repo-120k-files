// fichero 32217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32217;

Registro32217 crear_registro32217(int id) {
    Registro32217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
