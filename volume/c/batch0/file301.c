// fichero 301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro301;

Registro301 crear_registro301(int id) {
    Registro301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
