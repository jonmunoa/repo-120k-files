// fichero 28589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28589;

Registro28589 crear_registro28589(int id) {
    Registro28589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
