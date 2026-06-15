// fichero 26889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26889;

Registro26889 crear_registro26889(int id) {
    Registro26889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
