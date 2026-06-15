// fichero 44601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44601;

Registro44601 crear_registro44601(int id) {
    Registro44601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
