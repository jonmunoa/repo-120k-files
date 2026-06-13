// fichero 10093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10093;

Registro10093 crear_registro10093(int id) {
    Registro10093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10093(Registro10093 r) {
    return r.valor + r.id;
}
