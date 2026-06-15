// fichero 6461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6461;

Registro6461 crear_registro6461(int id) {
    Registro6461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
