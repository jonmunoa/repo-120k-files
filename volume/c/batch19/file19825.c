// fichero 19825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19825;

Registro19825 crear_registro19825(int id) {
    Registro19825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
