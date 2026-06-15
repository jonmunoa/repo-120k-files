// fichero 11633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11633;

Registro11633 crear_registro11633(int id) {
    Registro11633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
