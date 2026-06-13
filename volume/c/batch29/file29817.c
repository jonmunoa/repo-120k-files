// fichero 29817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29817;

Registro29817 crear_registro29817(int id) {
    Registro29817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29817(Registro29817 r) {
    return r.valor + r.id;
}
