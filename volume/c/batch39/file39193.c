// fichero 39193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39193;

Registro39193 crear_registro39193(int id) {
    Registro39193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
