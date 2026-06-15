// fichero 2329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2329;

Registro2329 crear_registro2329(int id) {
    Registro2329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
