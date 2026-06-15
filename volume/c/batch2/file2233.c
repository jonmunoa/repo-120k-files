// fichero 2233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2233;

Registro2233 crear_registro2233(int id) {
    Registro2233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
