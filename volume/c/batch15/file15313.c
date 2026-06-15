// fichero 15313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15313;

Registro15313 crear_registro15313(int id) {
    Registro15313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
