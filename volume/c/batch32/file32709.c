// fichero 32709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32709;

Registro32709 crear_registro32709(int id) {
    Registro32709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
