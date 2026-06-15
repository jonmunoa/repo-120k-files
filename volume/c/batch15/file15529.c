// fichero 15529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15529;

Registro15529 crear_registro15529(int id) {
    Registro15529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
