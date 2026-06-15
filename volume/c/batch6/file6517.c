// fichero 6517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6517;

Registro6517 crear_registro6517(int id) {
    Registro6517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
