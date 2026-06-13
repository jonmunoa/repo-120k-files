// fichero 6985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6985;

Registro6985 crear_registro6985(int id) {
    Registro6985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6985(Registro6985 r) {
    return r.valor + r.id;
}
