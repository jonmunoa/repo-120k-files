// fichero 21745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21745;

Registro21745 crear_registro21745(int id) {
    Registro21745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21745(Registro21745 r) {
    return r.valor + r.id;
}
