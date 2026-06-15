// fichero 2285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2285;

Registro2285 crear_registro2285(int id) {
    Registro2285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
