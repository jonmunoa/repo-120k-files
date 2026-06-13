// fichero 20093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20093;

Registro20093 crear_registro20093(int id) {
    Registro20093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20093(Registro20093 r) {
    return r.valor + r.id;
}
