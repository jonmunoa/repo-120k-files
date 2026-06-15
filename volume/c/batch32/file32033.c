// fichero 32033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32033;

Registro32033 crear_registro32033(int id) {
    Registro32033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
