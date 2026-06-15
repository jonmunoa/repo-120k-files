// fichero 20633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20633;

Registro20633 crear_registro20633(int id) {
    Registro20633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
