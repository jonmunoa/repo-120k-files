// fichero 45517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45517;

Registro45517 crear_registro45517(int id) {
    Registro45517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
