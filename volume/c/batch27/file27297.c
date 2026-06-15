// fichero 27297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27297;

Registro27297 crear_registro27297(int id) {
    Registro27297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
