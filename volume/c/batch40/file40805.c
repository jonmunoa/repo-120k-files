// fichero 40805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40805;

Registro40805 crear_registro40805(int id) {
    Registro40805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40805(Registro40805 r) {
    return r.valor + r.id;
}
