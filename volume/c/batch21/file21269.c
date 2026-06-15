// fichero 21269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21269;

Registro21269 crear_registro21269(int id) {
    Registro21269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
