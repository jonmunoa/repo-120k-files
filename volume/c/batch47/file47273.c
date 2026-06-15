// fichero 47273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47273;

Registro47273 crear_registro47273(int id) {
    Registro47273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
