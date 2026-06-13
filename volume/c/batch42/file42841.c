// fichero 42841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42841;

Registro42841 crear_registro42841(int id) {
    Registro42841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42841(Registro42841 r) {
    return r.valor + r.id;
}
