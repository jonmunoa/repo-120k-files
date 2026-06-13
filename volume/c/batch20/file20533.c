// fichero 20533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20533;

Registro20533 crear_registro20533(int id) {
    Registro20533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20533(Registro20533 r) {
    return r.valor + r.id;
}
