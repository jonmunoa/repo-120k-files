// fichero 2913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2913;

Registro2913 crear_registro2913(int id) {
    Registro2913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
