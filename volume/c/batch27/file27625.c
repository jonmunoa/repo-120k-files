// fichero 27625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27625;

Registro27625 crear_registro27625(int id) {
    Registro27625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
