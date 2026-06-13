// fichero 34845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34845;

Registro34845 crear_registro34845(int id) {
    Registro34845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34845(Registro34845 r) {
    return r.valor + r.id;
}
