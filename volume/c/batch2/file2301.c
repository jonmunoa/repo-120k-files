// fichero 2301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2301;

Registro2301 crear_registro2301(int id) {
    Registro2301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
