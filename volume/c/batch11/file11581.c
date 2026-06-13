// fichero 11581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11581;

Registro11581 crear_registro11581(int id) {
    Registro11581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11581(Registro11581 r) {
    return r.valor + r.id;
}
