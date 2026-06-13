// fichero 44429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44429;

Registro44429 crear_registro44429(int id) {
    Registro44429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44429(Registro44429 r) {
    return r.valor + r.id;
}
