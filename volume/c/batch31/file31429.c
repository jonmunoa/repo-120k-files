// fichero 31429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31429;

Registro31429 crear_registro31429(int id) {
    Registro31429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31429(Registro31429 r) {
    return r.valor + r.id;
}
