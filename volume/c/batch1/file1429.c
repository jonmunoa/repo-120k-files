// fichero 1429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1429;

Registro1429 crear_registro1429(int id) {
    Registro1429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
