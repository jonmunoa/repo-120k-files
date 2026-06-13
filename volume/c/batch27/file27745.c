// fichero 27745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27745;

Registro27745 crear_registro27745(int id) {
    Registro27745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27745(Registro27745 r) {
    return r.valor + r.id;
}
