// fichero 8993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8993;

Registro8993 crear_registro8993(int id) {
    Registro8993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8993(Registro8993 r) {
    return r.valor + r.id;
}
