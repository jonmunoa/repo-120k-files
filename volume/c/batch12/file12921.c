// fichero 12921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12921;

Registro12921 crear_registro12921(int id) {
    Registro12921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
