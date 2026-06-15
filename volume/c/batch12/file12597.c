// fichero 12597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12597;

Registro12597 crear_registro12597(int id) {
    Registro12597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
