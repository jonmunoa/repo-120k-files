// fichero 45081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45081;

Registro45081 crear_registro45081(int id) {
    Registro45081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
