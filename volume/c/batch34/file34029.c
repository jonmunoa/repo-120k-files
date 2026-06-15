// fichero 34029 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34029;

Registro34029 crear_registro34029(int id) {
    Registro34029 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
