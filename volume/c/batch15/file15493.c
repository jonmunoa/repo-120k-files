// fichero 15493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15493;

Registro15493 crear_registro15493(int id) {
    Registro15493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
