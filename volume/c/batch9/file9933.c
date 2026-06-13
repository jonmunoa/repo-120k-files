// fichero 9933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9933;

Registro9933 crear_registro9933(int id) {
    Registro9933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9933(Registro9933 r) {
    return r.valor + r.id;
}
