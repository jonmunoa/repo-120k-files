// fichero 30401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30401;

Registro30401 crear_registro30401(int id) {
    Registro30401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
