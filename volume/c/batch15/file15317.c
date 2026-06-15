// fichero 15317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15317;

Registro15317 crear_registro15317(int id) {
    Registro15317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
