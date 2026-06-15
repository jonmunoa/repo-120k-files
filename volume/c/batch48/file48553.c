// fichero 48553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48553;

Registro48553 crear_registro48553(int id) {
    Registro48553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
