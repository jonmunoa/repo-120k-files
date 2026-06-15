// fichero 39973 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39973;

Registro39973 crear_registro39973(int id) {
    Registro39973 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
