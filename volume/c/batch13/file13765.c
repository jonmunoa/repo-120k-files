// fichero 13765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13765;

Registro13765 crear_registro13765(int id) {
    Registro13765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
