// fichero 5405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5405;

Registro5405 crear_registro5405(int id) {
    Registro5405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
