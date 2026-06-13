// fichero 12449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12449;

Registro12449 crear_registro12449(int id) {
    Registro12449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12449(Registro12449 r) {
    return r.valor + r.id;
}
