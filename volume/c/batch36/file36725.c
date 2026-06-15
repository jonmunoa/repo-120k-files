// fichero 36725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36725;

Registro36725 crear_registro36725(int id) {
    Registro36725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
