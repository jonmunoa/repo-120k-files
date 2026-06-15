// fichero 32117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32117;

Registro32117 crear_registro32117(int id) {
    Registro32117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
