// fichero 36785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36785;

Registro36785 crear_registro36785(int id) {
    Registro36785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36785(Registro36785 r) {
    return r.valor + r.id;
}
