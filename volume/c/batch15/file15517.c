// fichero 15517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15517;

Registro15517 crear_registro15517(int id) {
    Registro15517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
