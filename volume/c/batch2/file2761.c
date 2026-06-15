// fichero 2761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2761;

Registro2761 crear_registro2761(int id) {
    Registro2761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
