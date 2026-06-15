// fichero 38725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38725;

Registro38725 crear_registro38725(int id) {
    Registro38725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
