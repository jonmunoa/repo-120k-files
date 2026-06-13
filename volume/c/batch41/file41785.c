// fichero 41785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41785;

Registro41785 crear_registro41785(int id) {
    Registro41785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41785(Registro41785 r) {
    return r.valor + r.id;
}
