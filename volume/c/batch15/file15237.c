// fichero 15237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15237;

Registro15237 crear_registro15237(int id) {
    Registro15237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
