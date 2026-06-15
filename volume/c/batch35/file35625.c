// fichero 35625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35625;

Registro35625 crear_registro35625(int id) {
    Registro35625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
