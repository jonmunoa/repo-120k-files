// fichero 32989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32989;

Registro32989 crear_registro32989(int id) {
    Registro32989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
