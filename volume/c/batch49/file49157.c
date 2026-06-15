// fichero 49157 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49157;

Registro49157 crear_registro49157(int id) {
    Registro49157 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
