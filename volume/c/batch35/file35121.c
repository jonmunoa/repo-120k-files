// fichero 35121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35121;

Registro35121 crear_registro35121(int id) {
    Registro35121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
