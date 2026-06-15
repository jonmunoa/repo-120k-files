// fichero 48593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48593;

Registro48593 crear_registro48593(int id) {
    Registro48593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
