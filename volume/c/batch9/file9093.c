// fichero 9093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9093;

Registro9093 crear_registro9093(int id) {
    Registro9093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9093(Registro9093 r) {
    return r.valor + r.id;
}
