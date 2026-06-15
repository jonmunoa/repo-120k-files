// fichero 32549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32549;

Registro32549 crear_registro32549(int id) {
    Registro32549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
