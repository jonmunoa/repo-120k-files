// fichero 31925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31925;

Registro31925 crear_registro31925(int id) {
    Registro31925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
