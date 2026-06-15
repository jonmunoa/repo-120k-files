// fichero 38925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38925;

Registro38925 crear_registro38925(int id) {
    Registro38925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
