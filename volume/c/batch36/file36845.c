// fichero 36845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36845;

Registro36845 crear_registro36845(int id) {
    Registro36845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36845(Registro36845 r) {
    return r.valor + r.id;
}
