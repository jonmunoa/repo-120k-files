// fichero 28421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28421;

Registro28421 crear_registro28421(int id) {
    Registro28421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
