// fichero 28405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28405;

Registro28405 crear_registro28405(int id) {
    Registro28405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
