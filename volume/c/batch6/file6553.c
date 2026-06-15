// fichero 6553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6553;

Registro6553 crear_registro6553(int id) {
    Registro6553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
