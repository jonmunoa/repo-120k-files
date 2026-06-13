// fichero 9629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9629;

Registro9629 crear_registro9629(int id) {
    Registro9629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9629(Registro9629 r) {
    return r.valor + r.id;
}
