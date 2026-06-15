// fichero 5385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5385;

Registro5385 crear_registro5385(int id) {
    Registro5385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
