// fichero 31881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31881;

Registro31881 crear_registro31881(int id) {
    Registro31881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31881(Registro31881 r) {
    return r.valor + r.id;
}
