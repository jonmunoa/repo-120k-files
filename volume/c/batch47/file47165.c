// fichero 47165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47165;

Registro47165 crear_registro47165(int id) {
    Registro47165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
