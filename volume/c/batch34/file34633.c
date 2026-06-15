// fichero 34633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34633;

Registro34633 crear_registro34633(int id) {
    Registro34633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
