// fichero 32053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32053;

Registro32053 crear_registro32053(int id) {
    Registro32053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
