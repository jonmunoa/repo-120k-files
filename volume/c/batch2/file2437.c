// fichero 2437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2437;

Registro2437 crear_registro2437(int id) {
    Registro2437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
