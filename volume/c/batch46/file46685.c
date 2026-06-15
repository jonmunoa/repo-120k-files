// fichero 46685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46685;

Registro46685 crear_registro46685(int id) {
    Registro46685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
