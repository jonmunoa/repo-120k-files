// fichero 2997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2997;

Registro2997 crear_registro2997(int id) {
    Registro2997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
