// fichero 43633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43633;

Registro43633 crear_registro43633(int id) {
    Registro43633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
