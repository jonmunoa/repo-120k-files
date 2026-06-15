// fichero 12421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12421;

Registro12421 crear_registro12421(int id) {
    Registro12421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
