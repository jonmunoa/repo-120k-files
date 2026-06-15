// fichero 45405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45405;

Registro45405 crear_registro45405(int id) {
    Registro45405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
