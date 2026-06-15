// fichero 37429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37429;

Registro37429 crear_registro37429(int id) {
    Registro37429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
