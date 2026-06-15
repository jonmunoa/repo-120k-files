// fichero 6889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6889;

Registro6889 crear_registro6889(int id) {
    Registro6889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
