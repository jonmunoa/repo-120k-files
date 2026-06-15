// fichero 27413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27413;

Registro27413 crear_registro27413(int id) {
    Registro27413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
