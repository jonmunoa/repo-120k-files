// fichero 15397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15397;

Registro15397 crear_registro15397(int id) {
    Registro15397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
