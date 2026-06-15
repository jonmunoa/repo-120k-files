// fichero 5889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5889;

Registro5889 crear_registro5889(int id) {
    Registro5889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
