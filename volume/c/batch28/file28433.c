// fichero 28433 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28433;

Registro28433 crear_registro28433(int id) {
    Registro28433 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
