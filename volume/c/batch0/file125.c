// fichero 125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro125;

Registro125 crear_registro125(int id) {
    Registro125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
