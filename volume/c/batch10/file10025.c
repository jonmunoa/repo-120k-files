// fichero 10025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10025;

Registro10025 crear_registro10025(int id) {
    Registro10025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10025(Registro10025 r) {
    return r.valor + r.id;
}
