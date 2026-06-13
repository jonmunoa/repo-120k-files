// fichero 22929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22929;

Registro22929 crear_registro22929(int id) {
    Registro22929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22929(Registro22929 r) {
    return r.valor + r.id;
}
