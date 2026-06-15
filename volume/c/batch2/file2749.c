// fichero 2749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2749;

Registro2749 crear_registro2749(int id) {
    Registro2749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
