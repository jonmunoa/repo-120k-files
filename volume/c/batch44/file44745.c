// fichero 44745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44745;

Registro44745 crear_registro44745(int id) {
    Registro44745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
