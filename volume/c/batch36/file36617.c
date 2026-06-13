// fichero 36617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36617;

Registro36617 crear_registro36617(int id) {
    Registro36617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36617(Registro36617 r) {
    return r.valor + r.id;
}
