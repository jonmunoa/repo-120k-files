// fichero 34569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34569;

Registro34569 crear_registro34569(int id) {
    Registro34569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34569(Registro34569 r) {
    return r.valor + r.id;
}
