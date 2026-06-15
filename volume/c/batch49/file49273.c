// fichero 49273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49273;

Registro49273 crear_registro49273(int id) {
    Registro49273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
