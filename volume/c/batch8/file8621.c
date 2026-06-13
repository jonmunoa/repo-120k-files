// fichero 8621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8621;

Registro8621 crear_registro8621(int id) {
    Registro8621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8621(Registro8621 r) {
    return r.valor + r.id;
}
