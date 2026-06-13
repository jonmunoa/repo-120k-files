// fichero 8837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8837;

Registro8837 crear_registro8837(int id) {
    Registro8837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8837(Registro8837 r) {
    return r.valor + r.id;
}
