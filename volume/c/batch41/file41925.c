// fichero 41925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41925;

Registro41925 crear_registro41925(int id) {
    Registro41925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
