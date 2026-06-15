// fichero 8453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8453;

Registro8453 crear_registro8453(int id) {
    Registro8453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
