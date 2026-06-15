// fichero 32969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32969;

Registro32969 crear_registro32969(int id) {
    Registro32969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
