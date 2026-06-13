// fichero 3689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3689;

Registro3689 crear_registro3689(int id) {
    Registro3689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3689(Registro3689 r) {
    return r.valor + r.id;
}
