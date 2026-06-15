// fichero 27225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27225;

Registro27225 crear_registro27225(int id) {
    Registro27225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
