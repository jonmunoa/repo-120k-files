// fichero 889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro889;

Registro889 crear_registro889(int id) {
    Registro889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
