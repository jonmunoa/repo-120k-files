// fichero 49589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49589;

Registro49589 crear_registro49589(int id) {
    Registro49589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
