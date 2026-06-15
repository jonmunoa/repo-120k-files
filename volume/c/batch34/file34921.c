// fichero 34921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34921;

Registro34921 crear_registro34921(int id) {
    Registro34921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
