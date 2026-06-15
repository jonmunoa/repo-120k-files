// fichero 11745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11745;

Registro11745 crear_registro11745(int id) {
    Registro11745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
