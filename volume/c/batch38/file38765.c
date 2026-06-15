// fichero 38765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38765;

Registro38765 crear_registro38765(int id) {
    Registro38765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
