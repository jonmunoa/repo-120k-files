// fichero 39141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39141;

Registro39141 crear_registro39141(int id) {
    Registro39141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
