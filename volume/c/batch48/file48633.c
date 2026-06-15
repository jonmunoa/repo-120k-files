// fichero 48633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48633;

Registro48633 crear_registro48633(int id) {
    Registro48633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
