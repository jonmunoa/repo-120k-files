// fichero 18665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18665;

Registro18665 crear_registro18665(int id) {
    Registro18665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
