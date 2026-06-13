// fichero 36429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36429;

Registro36429 crear_registro36429(int id) {
    Registro36429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36429(Registro36429 r) {
    return r.valor + r.id;
}
