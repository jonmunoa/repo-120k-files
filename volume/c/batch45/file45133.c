// fichero 45133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45133;

Registro45133 crear_registro45133(int id) {
    Registro45133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
