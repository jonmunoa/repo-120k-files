// fichero 16429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16429;

Registro16429 crear_registro16429(int id) {
    Registro16429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
