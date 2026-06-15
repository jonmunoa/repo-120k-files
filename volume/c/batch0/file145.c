// fichero 145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro145;

Registro145 crear_registro145(int id) {
    Registro145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
