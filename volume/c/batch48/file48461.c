// fichero 48461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48461;

Registro48461 crear_registro48461(int id) {
    Registro48461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
