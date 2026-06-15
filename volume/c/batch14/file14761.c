// fichero 14761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14761;

Registro14761 crear_registro14761(int id) {
    Registro14761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
