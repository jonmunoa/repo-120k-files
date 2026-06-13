// fichero 47817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47817;

Registro47817 crear_registro47817(int id) {
    Registro47817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47817(Registro47817 r) {
    return r.valor + r.id;
}
