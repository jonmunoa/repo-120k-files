// fichero 853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro853;

Registro853 crear_registro853(int id) {
    Registro853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro853(Registro853 r) {
    return r.valor + r.id;
}
