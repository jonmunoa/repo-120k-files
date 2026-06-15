// fichero 32393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32393;

Registro32393 crear_registro32393(int id) {
    Registro32393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
