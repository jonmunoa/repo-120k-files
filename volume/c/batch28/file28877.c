// fichero 28877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28877;

Registro28877 crear_registro28877(int id) {
    Registro28877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
