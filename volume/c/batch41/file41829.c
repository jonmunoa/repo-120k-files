// fichero 41829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41829;

Registro41829 crear_registro41829(int id) {
    Registro41829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41829(Registro41829 r) {
    return r.valor + r.id;
}
