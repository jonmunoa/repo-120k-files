// fichero 12441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12441;

Registro12441 crear_registro12441(int id) {
    Registro12441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
