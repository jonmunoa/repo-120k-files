// fichero 121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro121;

Registro121 crear_registro121(int id) {
    Registro121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
