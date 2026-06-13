// fichero 39313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39313;

Registro39313 crear_registro39313(int id) {
    Registro39313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39313(Registro39313 r) {
    return r.valor + r.id;
}
