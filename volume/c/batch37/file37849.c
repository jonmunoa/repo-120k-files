// fichero 37849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37849;

Registro37849 crear_registro37849(int id) {
    Registro37849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37849(Registro37849 r) {
    return r.valor + r.id;
}
