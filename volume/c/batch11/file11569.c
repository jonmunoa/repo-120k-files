// fichero 11569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11569;

Registro11569 crear_registro11569(int id) {
    Registro11569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11569(Registro11569 r) {
    return r.valor + r.id;
}
