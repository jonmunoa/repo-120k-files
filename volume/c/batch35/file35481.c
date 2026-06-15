// fichero 35481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35481;

Registro35481 crear_registro35481(int id) {
    Registro35481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
