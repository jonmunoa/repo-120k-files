// fichero 317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro317;

Registro317 crear_registro317(int id) {
    Registro317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
