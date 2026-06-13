// fichero 21985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21985;

Registro21985 crear_registro21985(int id) {
    Registro21985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21985(Registro21985 r) {
    return r.valor + r.id;
}
