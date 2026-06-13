// fichero 40733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40733;

Registro40733 crear_registro40733(int id) {
    Registro40733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40733(Registro40733 r) {
    return r.valor + r.id;
}
