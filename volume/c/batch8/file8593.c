// fichero 8593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8593;

Registro8593 crear_registro8593(int id) {
    Registro8593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
