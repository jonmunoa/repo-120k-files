// fichero 10493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10493;

Registro10493 crear_registro10493(int id) {
    Registro10493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
