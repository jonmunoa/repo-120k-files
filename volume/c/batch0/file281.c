// fichero 281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro281;

Registro281 crear_registro281(int id) {
    Registro281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro281(Registro281 r) {
    return r.valor + r.id;
}
