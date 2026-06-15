// fichero 13045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13045;

Registro13045 crear_registro13045(int id) {
    Registro13045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
