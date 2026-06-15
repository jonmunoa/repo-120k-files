// fichero 48225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48225;

Registro48225 crear_registro48225(int id) {
    Registro48225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
