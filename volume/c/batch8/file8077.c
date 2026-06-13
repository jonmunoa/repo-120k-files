// fichero 8077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8077;

Registro8077 crear_registro8077(int id) {
    Registro8077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8077(Registro8077 r) {
    return r.valor + r.id;
}
