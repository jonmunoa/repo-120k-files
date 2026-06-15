// fichero 46821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46821;

Registro46821 crear_registro46821(int id) {
    Registro46821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
