// fichero 18189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18189;

Registro18189 crear_registro18189(int id) {
    Registro18189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
