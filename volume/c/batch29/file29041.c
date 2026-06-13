// fichero 29041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29041;

Registro29041 crear_registro29041(int id) {
    Registro29041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29041(Registro29041 r) {
    return r.valor + r.id;
}
