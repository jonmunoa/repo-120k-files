// fichero 1153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1153;

Registro1153 crear_registro1153(int id) {
    Registro1153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1153(Registro1153 r) {
    return r.valor + r.id;
}
