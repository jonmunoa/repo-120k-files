// fichero 46889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46889;

Registro46889 crear_registro46889(int id) {
    Registro46889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
