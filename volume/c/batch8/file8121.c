// fichero 8121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8121;

Registro8121 crear_registro8121(int id) {
    Registro8121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
