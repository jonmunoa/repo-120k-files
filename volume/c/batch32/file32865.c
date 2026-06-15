// fichero 32865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32865;

Registro32865 crear_registro32865(int id) {
    Registro32865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
