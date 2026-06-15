// fichero 21745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21745;

Registro21745 crear_registro21745(int id) {
    Registro21745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
