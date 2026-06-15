// fichero 12297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12297;

Registro12297 crear_registro12297(int id) {
    Registro12297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
