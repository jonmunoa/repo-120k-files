// fichero 21805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21805;

Registro21805 crear_registro21805(int id) {
    Registro21805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21805(Registro21805 r) {
    return r.valor + r.id;
}
