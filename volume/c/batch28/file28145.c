// fichero 28145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28145;

Registro28145 crear_registro28145(int id) {
    Registro28145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
