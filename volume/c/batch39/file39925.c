// fichero 39925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39925;

Registro39925 crear_registro39925(int id) {
    Registro39925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
