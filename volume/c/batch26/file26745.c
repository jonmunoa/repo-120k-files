// fichero 26745 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26745;

Registro26745 crear_registro26745(int id) {
    Registro26745 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
