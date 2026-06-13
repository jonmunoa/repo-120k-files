// fichero 28805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28805;

Registro28805 crear_registro28805(int id) {
    Registro28805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28805(Registro28805 r) {
    return r.valor + r.id;
}
