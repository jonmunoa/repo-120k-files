// fichero 8429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8429;

Registro8429 crear_registro8429(int id) {
    Registro8429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
