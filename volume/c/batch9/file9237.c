// fichero 9237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9237;

Registro9237 crear_registro9237(int id) {
    Registro9237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9237(Registro9237 r) {
    return r.valor + r.id;
}
