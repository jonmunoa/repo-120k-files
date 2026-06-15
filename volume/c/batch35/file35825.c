// fichero 35825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35825;

Registro35825 crear_registro35825(int id) {
    Registro35825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
