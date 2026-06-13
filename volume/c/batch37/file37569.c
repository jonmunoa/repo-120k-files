// fichero 37569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37569;

Registro37569 crear_registro37569(int id) {
    Registro37569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37569(Registro37569 r) {
    return r.valor + r.id;
}
