// fichero 15385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15385;

Registro15385 crear_registro15385(int id) {
    Registro15385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
