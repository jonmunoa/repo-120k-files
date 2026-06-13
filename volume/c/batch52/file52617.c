// fichero 52617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52617;

Registro52617 crear_registro52617(int id) {
    Registro52617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52617(Registro52617 r) {
    return r.valor + r.id;
}
