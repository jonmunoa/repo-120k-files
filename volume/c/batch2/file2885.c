// fichero 2885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2885;

Registro2885 crear_registro2885(int id) {
    Registro2885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
