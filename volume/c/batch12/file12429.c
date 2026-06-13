// fichero 12429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12429;

Registro12429 crear_registro12429(int id) {
    Registro12429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12429(Registro12429 r) {
    return r.valor + r.id;
}
