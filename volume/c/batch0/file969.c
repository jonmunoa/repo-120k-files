// fichero 969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro969;

Registro969 crear_registro969(int id) {
    Registro969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
