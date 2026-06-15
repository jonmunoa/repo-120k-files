// fichero 39145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39145;

Registro39145 crear_registro39145(int id) {
    Registro39145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
