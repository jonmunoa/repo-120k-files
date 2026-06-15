// fichero 32853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32853;

Registro32853 crear_registro32853(int id) {
    Registro32853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
