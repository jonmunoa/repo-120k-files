// fichero 19321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19321;

Registro19321 crear_registro19321(int id) {
    Registro19321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
