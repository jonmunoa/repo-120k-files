// fichero 29657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29657;

Registro29657 crear_registro29657(int id) {
    Registro29657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29657(Registro29657 r) {
    return r.valor + r.id;
}
