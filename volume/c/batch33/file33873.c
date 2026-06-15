// fichero 33873 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33873;

Registro33873 crear_registro33873(int id) {
    Registro33873 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
