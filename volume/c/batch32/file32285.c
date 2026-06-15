// fichero 32285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32285;

Registro32285 crear_registro32285(int id) {
    Registro32285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
