// fichero 2553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2553;

Registro2553 crear_registro2553(int id) {
    Registro2553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
