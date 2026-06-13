// fichero 8505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8505;

Registro8505 crear_registro8505(int id) {
    Registro8505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8505(Registro8505 r) {
    return r.valor + r.id;
}
