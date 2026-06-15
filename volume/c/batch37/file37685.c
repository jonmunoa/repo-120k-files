// fichero 37685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37685;

Registro37685 crear_registro37685(int id) {
    Registro37685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
