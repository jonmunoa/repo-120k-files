// fichero 36077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36077;

Registro36077 crear_registro36077(int id) {
    Registro36077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36077(Registro36077 r) {
    return r.valor + r.id;
}
