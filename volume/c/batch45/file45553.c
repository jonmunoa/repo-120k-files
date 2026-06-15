// fichero 45553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45553;

Registro45553 crear_registro45553(int id) {
    Registro45553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
