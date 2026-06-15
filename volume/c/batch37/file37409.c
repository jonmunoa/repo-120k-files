// fichero 37409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37409;

Registro37409 crear_registro37409(int id) {
    Registro37409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
