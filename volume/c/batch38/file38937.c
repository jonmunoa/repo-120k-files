// fichero 38937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38937;

Registro38937 crear_registro38937(int id) {
    Registro38937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
