// fichero 24313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24313;

Registro24313 crear_registro24313(int id) {
    Registro24313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
