// fichero 24889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24889;

Registro24889 crear_registro24889(int id) {
    Registro24889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
