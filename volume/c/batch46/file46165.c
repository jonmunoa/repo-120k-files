// fichero 46165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46165;

Registro46165 crear_registro46165(int id) {
    Registro46165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
