// fichero 49401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49401;

Registro49401 crear_registro49401(int id) {
    Registro49401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
