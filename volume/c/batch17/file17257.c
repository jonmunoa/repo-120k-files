// fichero 17257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17257;

Registro17257 crear_registro17257(int id) {
    Registro17257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
