// fichero 45493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45493;

Registro45493 crear_registro45493(int id) {
    Registro45493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
