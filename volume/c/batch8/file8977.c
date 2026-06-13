// fichero 8977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8977;

Registro8977 crear_registro8977(int id) {
    Registro8977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8977(Registro8977 r) {
    return r.valor + r.id;
}
