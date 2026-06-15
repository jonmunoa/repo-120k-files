// fichero 48317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48317;

Registro48317 crear_registro48317(int id) {
    Registro48317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
