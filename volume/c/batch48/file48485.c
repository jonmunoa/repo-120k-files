// fichero 48485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48485;

Registro48485 crear_registro48485(int id) {
    Registro48485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48485(Registro48485 r) {
    return r.valor + r.id;
}
