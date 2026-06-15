// fichero 5517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5517;

Registro5517 crear_registro5517(int id) {
    Registro5517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
