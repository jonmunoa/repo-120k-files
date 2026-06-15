// fichero 46997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46997;

Registro46997 crear_registro46997(int id) {
    Registro46997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
