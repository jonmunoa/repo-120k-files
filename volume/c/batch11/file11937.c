// fichero 11937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11937;

Registro11937 crear_registro11937(int id) {
    Registro11937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
