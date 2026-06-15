// fichero 37937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37937;

Registro37937 crear_registro37937(int id) {
    Registro37937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
