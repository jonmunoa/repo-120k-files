// fichero 24105 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24105;

Registro24105 crear_registro24105(int id) {
    Registro24105 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
