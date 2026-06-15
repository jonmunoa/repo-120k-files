// fichero 2477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2477;

Registro2477 crear_registro2477(int id) {
    Registro2477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
