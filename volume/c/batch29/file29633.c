// fichero 29633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29633;

Registro29633 crear_registro29633(int id) {
    Registro29633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
