// fichero 2281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2281;

Registro2281 crear_registro2281(int id) {
    Registro2281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
