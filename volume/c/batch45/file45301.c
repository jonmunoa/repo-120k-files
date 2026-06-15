// fichero 45301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45301;

Registro45301 crear_registro45301(int id) {
    Registro45301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
