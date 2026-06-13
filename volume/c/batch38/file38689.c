// fichero 38689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38689;

Registro38689 crear_registro38689(int id) {
    Registro38689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38689(Registro38689 r) {
    return r.valor + r.id;
}
