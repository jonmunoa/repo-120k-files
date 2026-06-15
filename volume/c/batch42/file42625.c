// fichero 42625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42625;

Registro42625 crear_registro42625(int id) {
    Registro42625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
