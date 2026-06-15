// fichero 16249 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16249;

Registro16249 crear_registro16249(int id) {
    Registro16249 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
