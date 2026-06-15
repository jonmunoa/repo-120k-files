// fichero 13713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13713;

Registro13713 crear_registro13713(int id) {
    Registro13713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
