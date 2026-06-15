// fichero 23341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23341;

Registro23341 crear_registro23341(int id) {
    Registro23341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
