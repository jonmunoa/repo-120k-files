// fichero 17301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17301;

Registro17301 crear_registro17301(int id) {
    Registro17301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
