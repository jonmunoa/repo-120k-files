// fichero 19817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19817;

Registro19817 crear_registro19817(int id) {
    Registro19817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19817(Registro19817 r) {
    return r.valor + r.id;
}
