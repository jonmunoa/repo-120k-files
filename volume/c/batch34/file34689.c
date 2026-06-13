// fichero 34689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34689;

Registro34689 crear_registro34689(int id) {
    Registro34689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34689(Registro34689 r) {
    return r.valor + r.id;
}
