// fichero 28101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28101;

Registro28101 crear_registro28101(int id) {
    Registro28101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
