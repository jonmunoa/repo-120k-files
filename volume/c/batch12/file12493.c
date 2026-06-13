// fichero 12493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12493;

Registro12493 crear_registro12493(int id) {
    Registro12493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12493(Registro12493 r) {
    return r.valor + r.id;
}
