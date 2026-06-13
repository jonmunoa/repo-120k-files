// fichero 19985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19985;

Registro19985 crear_registro19985(int id) {
    Registro19985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19985(Registro19985 r) {
    return r.valor + r.id;
}
