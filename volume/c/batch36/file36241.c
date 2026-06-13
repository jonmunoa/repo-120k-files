// fichero 36241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36241;

Registro36241 crear_registro36241(int id) {
    Registro36241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36241(Registro36241 r) {
    return r.valor + r.id;
}
