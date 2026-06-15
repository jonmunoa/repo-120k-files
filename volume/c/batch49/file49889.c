// fichero 49889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49889;

Registro49889 crear_registro49889(int id) {
    Registro49889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
