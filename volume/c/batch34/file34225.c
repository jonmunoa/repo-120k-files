// fichero 34225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34225;

Registro34225 crear_registro34225(int id) {
    Registro34225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34225(Registro34225 r) {
    return r.valor + r.id;
}
