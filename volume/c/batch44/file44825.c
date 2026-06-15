// fichero 44825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44825;

Registro44825 crear_registro44825(int id) {
    Registro44825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
