// fichero 28385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28385;

Registro28385 crear_registro28385(int id) {
    Registro28385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
