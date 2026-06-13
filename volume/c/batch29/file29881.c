// fichero 29881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29881;

Registro29881 crear_registro29881(int id) {
    Registro29881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29881(Registro29881 r) {
    return r.valor + r.id;
}
