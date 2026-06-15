// fichero 24473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24473;

Registro24473 crear_registro24473(int id) {
    Registro24473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
