// fichero 3621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3621;

Registro3621 crear_registro3621(int id) {
    Registro3621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3621(Registro3621 r) {
    return r.valor + r.id;
}
