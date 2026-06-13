// fichero 44745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44745;

Registro44745 crear_registro44745(int id) {
    Registro44745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44745(Registro44745 r) {
    return r.valor + r.id;
}
