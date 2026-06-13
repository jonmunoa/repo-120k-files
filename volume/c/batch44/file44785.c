// fichero 44785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44785;

Registro44785 crear_registro44785(int id) {
    Registro44785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44785(Registro44785 r) {
    return r.valor + r.id;
}
