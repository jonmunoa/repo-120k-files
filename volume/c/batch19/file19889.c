// fichero 19889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19889;

Registro19889 crear_registro19889(int id) {
    Registro19889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
