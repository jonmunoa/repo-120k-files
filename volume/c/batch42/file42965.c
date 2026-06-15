// fichero 42965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42965;

Registro42965 crear_registro42965(int id) {
    Registro42965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
