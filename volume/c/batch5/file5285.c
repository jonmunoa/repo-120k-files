// fichero 5285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5285;

Registro5285 crear_registro5285(int id) {
    Registro5285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
