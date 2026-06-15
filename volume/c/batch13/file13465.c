// fichero 13465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13465;

Registro13465 crear_registro13465(int id) {
    Registro13465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
