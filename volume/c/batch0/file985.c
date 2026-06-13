// fichero 985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro985;

Registro985 crear_registro985(int id) {
    Registro985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro985(Registro985 r) {
    return r.valor + r.id;
}
