// fichero 13093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13093;

Registro13093 crear_registro13093(int id) {
    Registro13093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
