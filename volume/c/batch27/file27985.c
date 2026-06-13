// fichero 27985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27985;

Registro27985 crear_registro27985(int id) {
    Registro27985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27985(Registro27985 r) {
    return r.valor + r.id;
}
