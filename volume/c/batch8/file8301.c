// fichero 8301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8301;

Registro8301 crear_registro8301(int id) {
    Registro8301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
