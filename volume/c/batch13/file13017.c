// fichero 13017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13017;

Registro13017 crear_registro13017(int id) {
    Registro13017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
