// fichero 45429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45429;

Registro45429 crear_registro45429(int id) {
    Registro45429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
