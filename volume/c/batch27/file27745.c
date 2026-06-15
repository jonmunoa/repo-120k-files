// fichero 27745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27745;

Registro27745 crear_registro27745(int id) {
    Registro27745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
