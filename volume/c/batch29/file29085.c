// fichero 29085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29085;

Registro29085 crear_registro29085(int id) {
    Registro29085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29085(Registro29085 r) {
    return r.valor + r.id;
}
