// fichero 21253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21253;

Registro21253 crear_registro21253(int id) {
    Registro21253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
