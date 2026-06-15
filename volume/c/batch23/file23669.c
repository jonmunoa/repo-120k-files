// fichero 23669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23669;

Registro23669 crear_registro23669(int id) {
    Registro23669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
