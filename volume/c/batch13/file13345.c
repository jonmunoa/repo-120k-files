// fichero 13345 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13345;

Registro13345 crear_registro13345(int id) {
    Registro13345 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
