// fichero 43121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43121;

Registro43121 crear_registro43121(int id) {
    Registro43121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
