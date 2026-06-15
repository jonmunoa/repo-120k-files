// fichero 46317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46317;

Registro46317 crear_registro46317(int id) {
    Registro46317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
