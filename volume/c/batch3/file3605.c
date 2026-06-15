// fichero 3605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3605;

Registro3605 crear_registro3605(int id) {
    Registro3605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
