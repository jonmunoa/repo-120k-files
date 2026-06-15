// fichero 43809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43809;

Registro43809 crear_registro43809(int id) {
    Registro43809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
