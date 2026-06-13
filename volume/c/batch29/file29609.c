// fichero 29609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29609;

Registro29609 crear_registro29609(int id) {
    Registro29609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29609(Registro29609 r) {
    return r.valor + r.id;
}
