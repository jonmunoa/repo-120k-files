// fichero 39065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39065;

Registro39065 crear_registro39065(int id) {
    Registro39065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39065(Registro39065 r) {
    return r.valor + r.id;
}
