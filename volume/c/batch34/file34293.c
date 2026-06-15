// fichero 34293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34293;

Registro34293 crear_registro34293(int id) {
    Registro34293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
