// fichero 2641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2641;

Registro2641 crear_registro2641(int id) {
    Registro2641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
