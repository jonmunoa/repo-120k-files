// fichero 40025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40025;

Registro40025 crear_registro40025(int id) {
    Registro40025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40025(Registro40025 r) {
    return r.valor + r.id;
}
