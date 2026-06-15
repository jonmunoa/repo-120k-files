// fichero 8385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8385;

Registro8385 crear_registro8385(int id) {
    Registro8385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
