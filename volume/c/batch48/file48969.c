// fichero 48969 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48969;

Registro48969 crear_registro48969(int id) {
    Registro48969 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
