// fichero 19597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19597;

Registro19597 crear_registro19597(int id) {
    Registro19597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
