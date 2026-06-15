// fichero 2121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2121;

Registro2121 crear_registro2121(int id) {
    Registro2121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
