// fichero 19925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19925;

Registro19925 crear_registro19925(int id) {
    Registro19925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
