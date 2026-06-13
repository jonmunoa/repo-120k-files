// fichero 7829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7829;

Registro7829 crear_registro7829(int id) {
    Registro7829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7829(Registro7829 r) {
    return r.valor + r.id;
}
