// fichero 19745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19745;

Registro19745 crear_registro19745(int id) {
    Registro19745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19745(Registro19745 r) {
    return r.valor + r.id;
}
