// fichero 27461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27461;

Registro27461 crear_registro27461(int id) {
    Registro27461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
