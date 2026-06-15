// fichero 39365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39365;

Registro39365 crear_registro39365(int id) {
    Registro39365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
