// fichero 45077 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45077;

Registro45077 crear_registro45077(int id) {
    Registro45077 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
