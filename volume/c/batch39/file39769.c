// fichero 39769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39769;

Registro39769 crear_registro39769(int id) {
    Registro39769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
