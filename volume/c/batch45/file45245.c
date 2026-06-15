// fichero 45245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45245;

Registro45245 crear_registro45245(int id) {
    Registro45245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
