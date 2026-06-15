// fichero 10429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10429;

Registro10429 crear_registro10429(int id) {
    Registro10429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
