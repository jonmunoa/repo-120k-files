// fichero 2065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2065;

Registro2065 crear_registro2065(int id) {
    Registro2065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
