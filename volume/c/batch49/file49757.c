// fichero 49757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49757;

Registro49757 crear_registro49757(int id) {
    Registro49757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
