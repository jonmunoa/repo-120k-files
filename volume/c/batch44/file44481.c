// fichero 44481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44481;

Registro44481 crear_registro44481(int id) {
    Registro44481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
