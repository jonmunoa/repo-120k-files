// fichero 49245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49245;

Registro49245 crear_registro49245(int id) {
    Registro49245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
