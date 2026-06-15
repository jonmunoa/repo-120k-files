// fichero 46549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46549;

Registro46549 crear_registro46549(int id) {
    Registro46549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
