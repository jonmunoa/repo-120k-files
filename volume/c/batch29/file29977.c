// fichero 29977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29977;

Registro29977 crear_registro29977(int id) {
    Registro29977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29977(Registro29977 r) {
    return r.valor + r.id;
}
