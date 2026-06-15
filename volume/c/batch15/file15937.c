// fichero 15937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15937;

Registro15937 crear_registro15937(int id) {
    Registro15937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
