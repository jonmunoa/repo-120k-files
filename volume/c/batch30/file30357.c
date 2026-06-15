// fichero 30357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30357;

Registro30357 crear_registro30357(int id) {
    Registro30357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
