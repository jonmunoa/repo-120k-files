// fichero 3429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3429;

Registro3429 crear_registro3429(int id) {
    Registro3429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
