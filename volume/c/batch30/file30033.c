// fichero 30033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30033;

Registro30033 crear_registro30033(int id) {
    Registro30033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
