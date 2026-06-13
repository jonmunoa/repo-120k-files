// fichero 24149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24149;

Registro24149 crear_registro24149(int id) {
    Registro24149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24149(Registro24149 r) {
    return r.valor + r.id;
}
