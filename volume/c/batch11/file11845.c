// fichero 11845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11845;

Registro11845 crear_registro11845(int id) {
    Registro11845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11845(Registro11845 r) {
    return r.valor + r.id;
}
