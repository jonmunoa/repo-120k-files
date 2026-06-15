// fichero 13365 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13365;

Registro13365 crear_registro13365(int id) {
    Registro13365 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
