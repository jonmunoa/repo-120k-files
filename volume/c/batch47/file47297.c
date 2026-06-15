// fichero 47297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47297;

Registro47297 crear_registro47297(int id) {
    Registro47297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
