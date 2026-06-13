// fichero 10433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10433;

Registro10433 crear_registro10433(int id) {
    Registro10433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10433(Registro10433 r) {
    return r.valor + r.id;
}
