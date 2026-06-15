// fichero 42925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42925;

Registro42925 crear_registro42925(int id) {
    Registro42925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
