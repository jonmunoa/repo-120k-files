// fichero 38985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38985;

Registro38985 crear_registro38985(int id) {
    Registro38985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38985(Registro38985 r) {
    return r.valor + r.id;
}
