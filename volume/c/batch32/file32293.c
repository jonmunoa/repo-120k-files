// fichero 32293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32293;

Registro32293 crear_registro32293(int id) {
    Registro32293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
