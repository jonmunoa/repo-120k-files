// fichero 2769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2769;

Registro2769 crear_registro2769(int id) {
    Registro2769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
