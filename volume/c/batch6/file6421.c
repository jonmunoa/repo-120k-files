// fichero 6421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6421;

Registro6421 crear_registro6421(int id) {
    Registro6421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
