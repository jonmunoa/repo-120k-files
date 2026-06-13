// fichero 23117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23117;

Registro23117 crear_registro23117(int id) {
    Registro23117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23117(Registro23117 r) {
    return r.valor + r.id;
}
