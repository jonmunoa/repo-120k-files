// fichero 26357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26357;

Registro26357 crear_registro26357(int id) {
    Registro26357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
