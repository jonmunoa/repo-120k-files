// fichero 37961 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37961;

Registro37961 crear_registro37961(int id) {
    Registro37961 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
