// fichero 8357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8357;

Registro8357 crear_registro8357(int id) {
    Registro8357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
