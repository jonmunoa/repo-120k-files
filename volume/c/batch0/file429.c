// fichero 429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro429;

Registro429 crear_registro429(int id) {
    Registro429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
