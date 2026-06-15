// fichero 4649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4649;

Registro4649 crear_registro4649(int id) {
    Registro4649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
