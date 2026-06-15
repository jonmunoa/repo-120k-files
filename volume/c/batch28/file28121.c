// fichero 28121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28121;

Registro28121 crear_registro28121(int id) {
    Registro28121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
