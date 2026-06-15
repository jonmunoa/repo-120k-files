// fichero 46081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46081;

Registro46081 crear_registro46081(int id) {
    Registro46081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
