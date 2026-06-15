// fichero 2085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2085;

Registro2085 crear_registro2085(int id) {
    Registro2085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
