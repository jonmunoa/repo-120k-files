// fichero 44889 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44889;

Registro44889 crear_registro44889(int id) {
    Registro44889 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
