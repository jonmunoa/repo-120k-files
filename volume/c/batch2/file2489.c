// fichero 2489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2489;

Registro2489 crear_registro2489(int id) {
    Registro2489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
