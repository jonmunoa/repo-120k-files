// fichero 49165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49165;

Registro49165 crear_registro49165(int id) {
    Registro49165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
