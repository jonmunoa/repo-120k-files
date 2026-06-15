// fichero 21329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21329;

Registro21329 crear_registro21329(int id) {
    Registro21329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
