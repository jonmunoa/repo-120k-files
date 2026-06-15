// fichero 32301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32301;

Registro32301 crear_registro32301(int id) {
    Registro32301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
