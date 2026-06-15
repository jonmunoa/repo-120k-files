// fichero 33761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33761;

Registro33761 crear_registro33761(int id) {
    Registro33761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
