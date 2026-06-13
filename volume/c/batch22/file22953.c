// fichero 22953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22953;

Registro22953 crear_registro22953(int id) {
    Registro22953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22953(Registro22953 r) {
    return r.valor + r.id;
}
