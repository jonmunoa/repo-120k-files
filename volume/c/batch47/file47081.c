// fichero 47081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47081;

Registro47081 crear_registro47081(int id) {
    Registro47081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
