// fichero 36485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36485;

Registro36485 crear_registro36485(int id) {
    Registro36485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36485(Registro36485 r) {
    return r.valor + r.id;
}
