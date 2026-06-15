// fichero 34321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34321;

Registro34321 crear_registro34321(int id) {
    Registro34321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
