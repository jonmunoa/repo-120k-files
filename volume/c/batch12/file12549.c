// fichero 12549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12549;

Registro12549 crear_registro12549(int id) {
    Registro12549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12549(Registro12549 r) {
    return r.valor + r.id;
}
