// fichero 18529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18529;

Registro18529 crear_registro18529(int id) {
    Registro18529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
