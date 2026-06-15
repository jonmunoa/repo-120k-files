// fichero 27293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27293;

Registro27293 crear_registro27293(int id) {
    Registro27293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
