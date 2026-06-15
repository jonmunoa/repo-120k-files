// fichero 17745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17745;

Registro17745 crear_registro17745(int id) {
    Registro17745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
