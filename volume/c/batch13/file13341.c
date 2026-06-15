// fichero 13341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13341;

Registro13341 crear_registro13341(int id) {
    Registro13341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
