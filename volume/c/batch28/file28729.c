// fichero 28729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28729;

Registro28729 crear_registro28729(int id) {
    Registro28729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
