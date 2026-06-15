// fichero 49325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49325;

Registro49325 crear_registro49325(int id) {
    Registro49325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
