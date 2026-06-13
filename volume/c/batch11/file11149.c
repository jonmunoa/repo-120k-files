// fichero 11149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11149;

Registro11149 crear_registro11149(int id) {
    Registro11149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11149(Registro11149 r) {
    return r.valor + r.id;
}
