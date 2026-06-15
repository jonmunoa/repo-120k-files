// fichero 10357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10357;

Registro10357 crear_registro10357(int id) {
    Registro10357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
