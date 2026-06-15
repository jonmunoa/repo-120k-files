// fichero 46261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46261;

Registro46261 crear_registro46261(int id) {
    Registro46261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
