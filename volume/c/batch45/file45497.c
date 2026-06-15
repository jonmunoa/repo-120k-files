// fichero 45497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45497;

Registro45497 crear_registro45497(int id) {
    Registro45497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
