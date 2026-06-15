// fichero 35253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35253;

Registro35253 crear_registro35253(int id) {
    Registro35253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
