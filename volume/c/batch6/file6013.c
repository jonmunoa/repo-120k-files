// fichero 6013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6013;

Registro6013 crear_registro6013(int id) {
    Registro6013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
