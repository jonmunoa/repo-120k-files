// fichero 32937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32937;

Registro32937 crear_registro32937(int id) {
    Registro32937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
