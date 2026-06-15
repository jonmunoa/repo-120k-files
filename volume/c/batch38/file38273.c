// fichero 38273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38273;

Registro38273 crear_registro38273(int id) {
    Registro38273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
