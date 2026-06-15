// fichero 10633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10633;

Registro10633 crear_registro10633(int id) {
    Registro10633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
