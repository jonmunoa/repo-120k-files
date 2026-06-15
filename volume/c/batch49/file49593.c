// fichero 49593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49593;

Registro49593 crear_registro49593(int id) {
    Registro49593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
