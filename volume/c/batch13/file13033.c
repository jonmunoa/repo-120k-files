// fichero 13033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13033;

Registro13033 crear_registro13033(int id) {
    Registro13033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
