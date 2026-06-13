// fichero 12745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12745;

Registro12745 crear_registro12745(int id) {
    Registro12745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12745(Registro12745 r) {
    return r.valor + r.id;
}
