// fichero 2605 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2605;

Registro2605 crear_registro2605(int id) {
    Registro2605 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
