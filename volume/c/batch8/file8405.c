// fichero 8405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8405;

Registro8405 crear_registro8405(int id) {
    Registro8405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
