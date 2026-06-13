// fichero 35745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35745;

Registro35745 crear_registro35745(int id) {
    Registro35745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35745(Registro35745 r) {
    return r.valor + r.id;
}
