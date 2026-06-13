// fichero 6857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6857;

Registro6857 crear_registro6857(int id) {
    Registro6857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6857(Registro6857 r) {
    return r.valor + r.id;
}
