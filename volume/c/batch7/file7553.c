// fichero 7553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7553;

Registro7553 crear_registro7553(int id) {
    Registro7553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
