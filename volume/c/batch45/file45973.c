// fichero 45973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45973;

Registro45973 crear_registro45973(int id) {
    Registro45973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
