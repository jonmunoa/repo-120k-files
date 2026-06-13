// fichero 28821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28821;

Registro28821 crear_registro28821(int id) {
    Registro28821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28821(Registro28821 r) {
    return r.valor + r.id;
}
