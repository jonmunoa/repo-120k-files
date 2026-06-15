// fichero 2245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2245;

Registro2245 crear_registro2245(int id) {
    Registro2245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
