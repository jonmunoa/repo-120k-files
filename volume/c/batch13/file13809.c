// fichero 13809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13809;

Registro13809 crear_registro13809(int id) {
    Registro13809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
