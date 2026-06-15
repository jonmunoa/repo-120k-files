// fichero 2673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2673;

Registro2673 crear_registro2673(int id) {
    Registro2673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
