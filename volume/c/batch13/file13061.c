// fichero 13061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13061;

Registro13061 crear_registro13061(int id) {
    Registro13061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
