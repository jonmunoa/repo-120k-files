// fichero 23273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23273;

Registro23273 crear_registro23273(int id) {
    Registro23273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
