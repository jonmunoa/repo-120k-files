// fichero 2945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2945;

Registro2945 crear_registro2945(int id) {
    Registro2945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
