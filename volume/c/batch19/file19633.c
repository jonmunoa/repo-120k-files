// fichero 19633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19633;

Registro19633 crear_registro19633(int id) {
    Registro19633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
