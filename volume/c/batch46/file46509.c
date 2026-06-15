// fichero 46509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46509;

Registro46509 crear_registro46509(int id) {
    Registro46509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
