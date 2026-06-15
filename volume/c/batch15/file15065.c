// fichero 15065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15065;

Registro15065 crear_registro15065(int id) {
    Registro15065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
