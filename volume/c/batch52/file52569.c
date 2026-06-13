// fichero 52569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52569;

Registro52569 crear_registro52569(int id) {
    Registro52569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52569(Registro52569 r) {
    return r.valor + r.id;
}
