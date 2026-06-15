// fichero 15213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15213;

Registro15213 crear_registro15213(int id) {
    Registro15213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
