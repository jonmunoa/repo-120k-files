// fichero 18093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18093;

Registro18093 crear_registro18093(int id) {
    Registro18093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
