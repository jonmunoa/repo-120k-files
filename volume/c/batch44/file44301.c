// fichero 44301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44301;

Registro44301 crear_registro44301(int id) {
    Registro44301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
