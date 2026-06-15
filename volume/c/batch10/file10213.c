// fichero 10213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10213;

Registro10213 crear_registro10213(int id) {
    Registro10213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
