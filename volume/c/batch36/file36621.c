// fichero 36621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36621;

Registro36621 crear_registro36621(int id) {
    Registro36621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36621(Registro36621 r) {
    return r.valor + r.id;
}
