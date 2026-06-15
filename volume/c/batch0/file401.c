// fichero 401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro401;

Registro401 crear_registro401(int id) {
    Registro401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
