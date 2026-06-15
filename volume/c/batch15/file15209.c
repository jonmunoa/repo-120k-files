// fichero 15209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15209;

Registro15209 crear_registro15209(int id) {
    Registro15209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
