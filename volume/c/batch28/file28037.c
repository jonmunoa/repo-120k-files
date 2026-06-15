// fichero 28037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28037;

Registro28037 crear_registro28037(int id) {
    Registro28037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
