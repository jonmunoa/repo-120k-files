// fichero 12817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12817;

Registro12817 crear_registro12817(int id) {
    Registro12817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12817(Registro12817 r) {
    return r.valor + r.id;
}
