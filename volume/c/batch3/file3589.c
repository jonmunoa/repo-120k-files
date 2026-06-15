// fichero 3589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3589;

Registro3589 crear_registro3589(int id) {
    Registro3589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
