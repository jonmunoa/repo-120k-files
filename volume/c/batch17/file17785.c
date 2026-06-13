// fichero 17785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17785;

Registro17785 crear_registro17785(int id) {
    Registro17785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17785(Registro17785 r) {
    return r.valor + r.id;
}
