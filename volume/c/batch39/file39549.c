// fichero 39549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39549;

Registro39549 crear_registro39549(int id) {
    Registro39549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
