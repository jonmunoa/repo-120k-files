// fichero 24089 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24089;

Registro24089 crear_registro24089(int id) {
    Registro24089 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
