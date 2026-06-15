// fichero 5521 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5521;

Registro5521 crear_registro5521(int id) {
    Registro5521 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
