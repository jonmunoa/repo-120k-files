// fichero 11621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11621;

Registro11621 crear_registro11621(int id) {
    Registro11621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11621(Registro11621 r) {
    return r.valor + r.id;
}
