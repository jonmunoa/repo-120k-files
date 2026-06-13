// fichero 40745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40745;

Registro40745 crear_registro40745(int id) {
    Registro40745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40745(Registro40745 r) {
    return r.valor + r.id;
}
