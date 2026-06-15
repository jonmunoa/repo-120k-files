// fichero 30513 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30513;

Registro30513 crear_registro30513(int id) {
    Registro30513 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
