// fichero 37085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37085;

Registro37085 crear_registro37085(int id) {
    Registro37085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
