// fichero 30225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30225;

Registro30225 crear_registro30225(int id) {
    Registro30225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
