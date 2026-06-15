// fichero 32325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32325;

Registro32325 crear_registro32325(int id) {
    Registro32325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
