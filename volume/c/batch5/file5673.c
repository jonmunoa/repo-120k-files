// fichero 5673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5673;

Registro5673 crear_registro5673(int id) {
    Registro5673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
