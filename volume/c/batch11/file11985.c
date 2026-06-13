// fichero 11985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11985;

Registro11985 crear_registro11985(int id) {
    Registro11985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11985(Registro11985 r) {
    return r.valor + r.id;
}
