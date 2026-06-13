// fichero 9429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9429;

Registro9429 crear_registro9429(int id) {
    Registro9429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9429(Registro9429 r) {
    return r.valor + r.id;
}
