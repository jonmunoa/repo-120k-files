// fichero 29985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29985;

Registro29985 crear_registro29985(int id) {
    Registro29985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29985(Registro29985 r) {
    return r.valor + r.id;
}
