// fichero 49413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49413;

Registro49413 crear_registro49413(int id) {
    Registro49413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
