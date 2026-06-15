// fichero 26925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26925;

Registro26925 crear_registro26925(int id) {
    Registro26925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
