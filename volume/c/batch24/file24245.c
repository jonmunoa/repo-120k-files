// fichero 24245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24245;

Registro24245 crear_registro24245(int id) {
    Registro24245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
