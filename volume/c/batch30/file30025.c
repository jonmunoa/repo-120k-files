// fichero 30025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30025;

Registro30025 crear_registro30025(int id) {
    Registro30025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30025(Registro30025 r) {
    return r.valor + r.id;
}
