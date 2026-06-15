// fichero 733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro733;

Registro733 crear_registro733(int id) {
    Registro733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
