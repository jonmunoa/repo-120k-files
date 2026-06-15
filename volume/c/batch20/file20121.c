// fichero 20121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20121;

Registro20121 crear_registro20121(int id) {
    Registro20121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
