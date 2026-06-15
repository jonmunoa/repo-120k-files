// fichero 27633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27633;

Registro27633 crear_registro27633(int id) {
    Registro27633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
