// fichero 3553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3553;

Registro3553 crear_registro3553(int id) {
    Registro3553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
