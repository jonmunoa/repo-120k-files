// fichero 21285 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21285;

Registro21285 crear_registro21285(int id) {
    Registro21285 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
