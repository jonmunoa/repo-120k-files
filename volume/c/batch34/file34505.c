// fichero 34505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34505;

Registro34505 crear_registro34505(int id) {
    Registro34505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34505(Registro34505 r) {
    return r.valor + r.id;
}
