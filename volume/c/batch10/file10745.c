// fichero 10745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10745;

Registro10745 crear_registro10745(int id) {
    Registro10745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10745(Registro10745 r) {
    return r.valor + r.id;
}
