// fichero 38965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38965;

Registro38965 crear_registro38965(int id) {
    Registro38965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
