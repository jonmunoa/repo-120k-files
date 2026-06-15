// fichero 47413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47413;

Registro47413 crear_registro47413(int id) {
    Registro47413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
