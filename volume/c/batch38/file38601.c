// fichero 38601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38601;

Registro38601 crear_registro38601(int id) {
    Registro38601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
