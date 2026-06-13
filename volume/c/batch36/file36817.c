// fichero 36817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36817;

Registro36817 crear_registro36817(int id) {
    Registro36817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36817(Registro36817 r) {
    return r.valor + r.id;
}
