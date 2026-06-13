// fichero 9805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9805;

Registro9805 crear_registro9805(int id) {
    Registro9805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9805(Registro9805 r) {
    return r.valor + r.id;
}
