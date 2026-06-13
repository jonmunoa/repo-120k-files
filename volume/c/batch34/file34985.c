// fichero 34985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34985;

Registro34985 crear_registro34985(int id) {
    Registro34985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34985(Registro34985 r) {
    return r.valor + r.id;
}
