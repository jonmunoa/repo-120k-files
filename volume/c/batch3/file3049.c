// fichero 3049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3049;

Registro3049 crear_registro3049(int id) {
    Registro3049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3049(Registro3049 r) {
    return r.valor + r.id;
}
