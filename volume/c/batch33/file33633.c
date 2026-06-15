// fichero 33633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33633;

Registro33633 crear_registro33633(int id) {
    Registro33633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
