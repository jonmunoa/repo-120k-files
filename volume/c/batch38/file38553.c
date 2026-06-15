// fichero 38553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38553;

Registro38553 crear_registro38553(int id) {
    Registro38553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
