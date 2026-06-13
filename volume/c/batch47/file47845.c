// fichero 47845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47845;

Registro47845 crear_registro47845(int id) {
    Registro47845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47845(Registro47845 r) {
    return r.valor + r.id;
}
