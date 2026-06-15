// fichero 15353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15353;

Registro15353 crear_registro15353(int id) {
    Registro15353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
