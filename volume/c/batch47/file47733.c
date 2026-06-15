// fichero 47733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47733;

Registro47733 crear_registro47733(int id) {
    Registro47733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
