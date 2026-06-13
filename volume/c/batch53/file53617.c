// fichero 53617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53617;

Registro53617 crear_registro53617(int id) {
    Registro53617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53617(Registro53617 r) {
    return r.valor + r.id;
}
