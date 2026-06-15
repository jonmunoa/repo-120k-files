// fichero 20921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20921;

Registro20921 crear_registro20921(int id) {
    Registro20921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
