// fichero 27925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27925;

Registro27925 crear_registro27925(int id) {
    Registro27925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
