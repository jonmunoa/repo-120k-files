// fichero 9665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9665;

Registro9665 crear_registro9665(int id) {
    Registro9665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9665(Registro9665 r) {
    return r.valor + r.id;
}
