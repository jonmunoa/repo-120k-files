// fichero 27157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27157;

Registro27157 crear_registro27157(int id) {
    Registro27157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
