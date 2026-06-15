// fichero 13453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13453;

Registro13453 crear_registro13453(int id) {
    Registro13453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
