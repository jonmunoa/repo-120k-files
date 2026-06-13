// fichero 2025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2025;

Registro2025 crear_registro2025(int id) {
    Registro2025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2025(Registro2025 r) {
    return r.valor + r.id;
}
