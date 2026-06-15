// fichero 15389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15389;

Registro15389 crear_registro15389(int id) {
    Registro15389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
