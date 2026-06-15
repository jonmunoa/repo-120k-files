// fichero 48929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48929;

Registro48929 crear_registro48929(int id) {
    Registro48929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
