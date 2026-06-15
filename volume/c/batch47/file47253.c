// fichero 47253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47253;

Registro47253 crear_registro47253(int id) {
    Registro47253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
