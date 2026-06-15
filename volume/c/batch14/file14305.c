// fichero 14305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14305;

Registro14305 crear_registro14305(int id) {
    Registro14305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
