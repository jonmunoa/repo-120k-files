// fichero 47349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47349;

Registro47349 crear_registro47349(int id) {
    Registro47349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
