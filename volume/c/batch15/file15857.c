// fichero 15857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15857;

Registro15857 crear_registro15857(int id) {
    Registro15857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
