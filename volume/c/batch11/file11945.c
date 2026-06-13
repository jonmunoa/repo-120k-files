// fichero 11945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11945;

Registro11945 crear_registro11945(int id) {
    Registro11945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11945(Registro11945 r) {
    return r.valor + r.id;
}
