// fichero 601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro601;

Registro601 crear_registro601(int id) {
    Registro601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
