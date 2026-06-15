// fichero 33997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33997;

Registro33997 crear_registro33997(int id) {
    Registro33997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
