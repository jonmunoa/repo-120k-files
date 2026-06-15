// fichero 8613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8613;

Registro8613 crear_registro8613(int id) {
    Registro8613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
