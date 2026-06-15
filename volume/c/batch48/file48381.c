// fichero 48381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48381;

Registro48381 crear_registro48381(int id) {
    Registro48381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
