// fichero 14265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14265;

Registro14265 crear_registro14265(int id) {
    Registro14265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
