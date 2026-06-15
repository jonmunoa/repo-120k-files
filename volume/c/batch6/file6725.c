// fichero 6725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6725;

Registro6725 crear_registro6725(int id) {
    Registro6725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
