// fichero 37925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37925;

Registro37925 crear_registro37925(int id) {
    Registro37925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
