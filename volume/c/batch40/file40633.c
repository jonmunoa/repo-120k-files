// fichero 40633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40633;

Registro40633 crear_registro40633(int id) {
    Registro40633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
