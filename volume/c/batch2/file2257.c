// fichero 2257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2257;

Registro2257 crear_registro2257(int id) {
    Registro2257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
