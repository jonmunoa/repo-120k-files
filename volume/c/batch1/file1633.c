// fichero 1633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1633;

Registro1633 crear_registro1633(int id) {
    Registro1633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
