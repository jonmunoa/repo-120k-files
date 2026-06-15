// fichero 44633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44633;

Registro44633 crear_registro44633(int id) {
    Registro44633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
