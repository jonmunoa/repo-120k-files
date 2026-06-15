// fichero 32237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32237;

Registro32237 crear_registro32237(int id) {
    Registro32237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
