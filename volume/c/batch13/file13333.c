// fichero 13333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13333;

Registro13333 crear_registro13333(int id) {
    Registro13333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
