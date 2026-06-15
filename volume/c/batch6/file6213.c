// fichero 6213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6213;

Registro6213 crear_registro6213(int id) {
    Registro6213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
