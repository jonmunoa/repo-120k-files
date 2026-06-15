// fichero 46417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46417;

Registro46417 crear_registro46417(int id) {
    Registro46417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
