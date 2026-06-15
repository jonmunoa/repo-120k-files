// fichero 13149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13149;

Registro13149 crear_registro13149(int id) {
    Registro13149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
