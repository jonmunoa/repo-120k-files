// fichero 45581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45581;

Registro45581 crear_registro45581(int id) {
    Registro45581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
