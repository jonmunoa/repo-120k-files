// fichero 22325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22325;

Registro22325 crear_registro22325(int id) {
    Registro22325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
