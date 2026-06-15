// fichero 18321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18321;

Registro18321 crear_registro18321(int id) {
    Registro18321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
