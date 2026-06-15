// fichero 18297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18297;

Registro18297 crear_registro18297(int id) {
    Registro18297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
