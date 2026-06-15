// fichero 33793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33793;

Registro33793 crear_registro33793(int id) {
    Registro33793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
