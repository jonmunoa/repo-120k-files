// fichero 13101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13101;

Registro13101 crear_registro13101(int id) {
    Registro13101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
