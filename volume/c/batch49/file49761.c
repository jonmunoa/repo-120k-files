// fichero 49761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49761;

Registro49761 crear_registro49761(int id) {
    Registro49761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49761(Registro49761 r) {
    return r.valor + r.id;
}
