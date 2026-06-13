// fichero 36849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36849;

Registro36849 crear_registro36849(int id) {
    Registro36849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36849(Registro36849 r) {
    return r.valor + r.id;
}
