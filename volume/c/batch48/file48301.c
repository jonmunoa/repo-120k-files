// fichero 48301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48301;

Registro48301 crear_registro48301(int id) {
    Registro48301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
