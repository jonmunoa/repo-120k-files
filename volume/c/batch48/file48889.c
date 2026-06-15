// fichero 48889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48889;

Registro48889 crear_registro48889(int id) {
    Registro48889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
