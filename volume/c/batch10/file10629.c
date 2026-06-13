// fichero 10629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10629;

Registro10629 crear_registro10629(int id) {
    Registro10629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10629(Registro10629 r) {
    return r.valor + r.id;
}
