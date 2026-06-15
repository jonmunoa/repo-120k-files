// fichero 28649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28649;

Registro28649 crear_registro28649(int id) {
    Registro28649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
