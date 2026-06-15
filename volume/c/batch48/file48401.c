// fichero 48401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48401;

Registro48401 crear_registro48401(int id) {
    Registro48401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
