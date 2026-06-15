// fichero 11473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11473;

Registro11473 crear_registro11473(int id) {
    Registro11473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
