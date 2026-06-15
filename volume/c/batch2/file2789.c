// fichero 2789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2789;

Registro2789 crear_registro2789(int id) {
    Registro2789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
