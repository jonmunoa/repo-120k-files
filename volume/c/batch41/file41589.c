// fichero 41589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41589;

Registro41589 crear_registro41589(int id) {
    Registro41589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
