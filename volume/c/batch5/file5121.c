// fichero 5121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5121;

Registro5121 crear_registro5121(int id) {
    Registro5121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
