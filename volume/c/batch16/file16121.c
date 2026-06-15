// fichero 16121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16121;

Registro16121 crear_registro16121(int id) {
    Registro16121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
