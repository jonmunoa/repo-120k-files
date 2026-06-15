// fichero 33769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33769;

Registro33769 crear_registro33769(int id) {
    Registro33769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
