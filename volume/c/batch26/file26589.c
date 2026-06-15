// fichero 26589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26589;

Registro26589 crear_registro26589(int id) {
    Registro26589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
