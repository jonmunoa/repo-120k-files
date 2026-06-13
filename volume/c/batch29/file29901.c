// fichero 29901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29901;

Registro29901 crear_registro29901(int id) {
    Registro29901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29901(Registro29901 r) {
    return r.valor + r.id;
}
