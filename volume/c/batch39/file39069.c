// fichero 39069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39069;

Registro39069 crear_registro39069(int id) {
    Registro39069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
