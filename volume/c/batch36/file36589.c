// fichero 36589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36589;

Registro36589 crear_registro36589(int id) {
    Registro36589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
