// fichero 9661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9661;

Registro9661 crear_registro9661(int id) {
    Registro9661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9661(Registro9661 r) {
    return r.valor + r.id;
}
