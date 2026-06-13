// fichero 18881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18881;

Registro18881 crear_registro18881(int id) {
    Registro18881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18881(Registro18881 r) {
    return r.valor + r.id;
}
