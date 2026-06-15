// fichero 5873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5873;

Registro5873 crear_registro5873(int id) {
    Registro5873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
