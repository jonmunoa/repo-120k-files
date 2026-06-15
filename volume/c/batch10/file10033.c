// fichero 10033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10033;

Registro10033 crear_registro10033(int id) {
    Registro10033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
