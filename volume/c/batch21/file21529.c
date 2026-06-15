// fichero 21529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21529;

Registro21529 crear_registro21529(int id) {
    Registro21529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
