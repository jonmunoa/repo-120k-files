// fichero 46965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46965;

Registro46965 crear_registro46965(int id) {
    Registro46965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
