// fichero 2161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2161;

Registro2161 crear_registro2161(int id) {
    Registro2161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
