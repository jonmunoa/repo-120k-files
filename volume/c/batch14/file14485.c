// fichero 14485 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14485;

Registro14485 crear_registro14485(int id) {
    Registro14485 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
