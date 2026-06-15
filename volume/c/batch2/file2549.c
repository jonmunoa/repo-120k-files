// fichero 2549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2549;

Registro2549 crear_registro2549(int id) {
    Registro2549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
