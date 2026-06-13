// fichero 53821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53821;

Registro53821 crear_registro53821(int id) {
    Registro53821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53821(Registro53821 r) {
    return r.valor + r.id;
}
