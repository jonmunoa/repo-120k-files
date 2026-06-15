// fichero 18237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18237;

Registro18237 crear_registro18237(int id) {
    Registro18237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
