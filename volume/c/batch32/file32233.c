// fichero 32233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32233;

Registro32233 crear_registro32233(int id) {
    Registro32233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
