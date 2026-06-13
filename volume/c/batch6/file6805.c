// fichero 6805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6805;

Registro6805 crear_registro6805(int id) {
    Registro6805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6805(Registro6805 r) {
    return r.valor + r.id;
}
