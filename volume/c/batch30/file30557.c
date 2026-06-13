// fichero 30557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30557;

Registro30557 crear_registro30557(int id) {
    Registro30557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30557(Registro30557 r) {
    return r.valor + r.id;
}
