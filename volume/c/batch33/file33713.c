// fichero 33713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33713;

Registro33713 crear_registro33713(int id) {
    Registro33713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
