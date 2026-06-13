// fichero 36985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36985;

Registro36985 crear_registro36985(int id) {
    Registro36985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36985(Registro36985 r) {
    return r.valor + r.id;
}
