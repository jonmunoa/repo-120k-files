// fichero 23137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23137;

Registro23137 crear_registro23137(int id) {
    Registro23137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
