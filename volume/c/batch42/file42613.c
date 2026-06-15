// fichero 42613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42613;

Registro42613 crear_registro42613(int id) {
    Registro42613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
