// fichero 16889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16889;

Registro16889 crear_registro16889(int id) {
    Registro16889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
