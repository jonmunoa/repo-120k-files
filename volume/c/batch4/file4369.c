// fichero 4369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4369;

Registro4369 crear_registro4369(int id) {
    Registro4369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
