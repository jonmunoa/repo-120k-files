// fichero 29101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29101;

Registro29101 crear_registro29101(int id) {
    Registro29101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29101(Registro29101 r) {
    return r.valor + r.id;
}
