// fichero 2745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2745;

Registro2745 crear_registro2745(int id) {
    Registro2745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
