// fichero 18633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18633;

Registro18633 crear_registro18633(int id) {
    Registro18633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
