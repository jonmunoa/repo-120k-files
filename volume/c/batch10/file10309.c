// fichero 10309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10309;

Registro10309 crear_registro10309(int id) {
    Registro10309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10309(Registro10309 r) {
    return r.valor + r.id;
}
