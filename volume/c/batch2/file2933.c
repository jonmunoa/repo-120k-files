// fichero 2933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2933;

Registro2933 crear_registro2933(int id) {
    Registro2933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
