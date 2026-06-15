// fichero 48161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48161;

Registro48161 crear_registro48161(int id) {
    Registro48161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
