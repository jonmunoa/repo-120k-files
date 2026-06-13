// fichero 37781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37781;

Registro37781 crear_registro37781(int id) {
    Registro37781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37781(Registro37781 r) {
    return r.valor + r.id;
}
