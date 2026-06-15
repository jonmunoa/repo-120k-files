// fichero 2397 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2397;

Registro2397 crear_registro2397(int id) {
    Registro2397 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
