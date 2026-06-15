// fichero 21385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21385;

Registro21385 crear_registro21385(int id) {
    Registro21385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
