// fichero 3925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3925;

Registro3925 crear_registro3925(int id) {
    Registro3925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
