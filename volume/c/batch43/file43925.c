// fichero 43925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43925;

Registro43925 crear_registro43925(int id) {
    Registro43925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
