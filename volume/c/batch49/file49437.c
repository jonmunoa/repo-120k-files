// fichero 49437 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49437;

Registro49437 crear_registro49437(int id) {
    Registro49437 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
