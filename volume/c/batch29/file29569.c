// fichero 29569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29569;

Registro29569 crear_registro29569(int id) {
    Registro29569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29569(Registro29569 r) {
    return r.valor + r.id;
}
