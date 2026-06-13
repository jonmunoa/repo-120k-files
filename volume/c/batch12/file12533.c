// fichero 12533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12533;

Registro12533 crear_registro12533(int id) {
    Registro12533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12533(Registro12533 r) {
    return r.valor + r.id;
}
