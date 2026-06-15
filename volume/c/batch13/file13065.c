// fichero 13065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13065;

Registro13065 crear_registro13065(int id) {
    Registro13065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
