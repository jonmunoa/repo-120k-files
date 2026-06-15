// fichero 24189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24189;

Registro24189 crear_registro24189(int id) {
    Registro24189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
