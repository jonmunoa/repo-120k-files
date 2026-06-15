// fichero 3789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3789;

Registro3789 crear_registro3789(int id) {
    Registro3789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
