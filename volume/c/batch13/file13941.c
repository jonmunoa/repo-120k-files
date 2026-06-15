// fichero 13941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13941;

Registro13941 crear_registro13941(int id) {
    Registro13941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
