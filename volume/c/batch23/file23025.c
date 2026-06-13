// fichero 23025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23025;

Registro23025 crear_registro23025(int id) {
    Registro23025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23025(Registro23025 r) {
    return r.valor + r.id;
}
