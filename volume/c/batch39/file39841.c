// fichero 39841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39841;

Registro39841 crear_registro39841(int id) {
    Registro39841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39841(Registro39841 r) {
    return r.valor + r.id;
}
