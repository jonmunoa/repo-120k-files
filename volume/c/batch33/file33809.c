// fichero 33809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33809;

Registro33809 crear_registro33809(int id) {
    Registro33809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
