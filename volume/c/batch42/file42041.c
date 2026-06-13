// fichero 42041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42041;

Registro42041 crear_registro42041(int id) {
    Registro42041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42041(Registro42041 r) {
    return r.valor + r.id;
}
