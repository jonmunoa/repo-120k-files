// fichero 34685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34685;

Registro34685 crear_registro34685(int id) {
    Registro34685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34685(Registro34685 r) {
    return r.valor + r.id;
}
