// fichero 30405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30405;

Registro30405 crear_registro30405(int id) {
    Registro30405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
