// fichero 44321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44321;

Registro44321 crear_registro44321(int id) {
    Registro44321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
