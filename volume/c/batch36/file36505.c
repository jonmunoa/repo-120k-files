// fichero 36505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36505;

Registro36505 crear_registro36505(int id) {
    Registro36505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36505(Registro36505 r) {
    return r.valor + r.id;
}
