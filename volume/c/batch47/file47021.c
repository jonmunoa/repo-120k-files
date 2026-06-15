// fichero 47021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47021;

Registro47021 crear_registro47021(int id) {
    Registro47021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
