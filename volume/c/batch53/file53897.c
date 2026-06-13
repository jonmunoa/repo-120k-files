// fichero 53897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53897;

Registro53897 crear_registro53897(int id) {
    Registro53897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53897(Registro53897 r) {
    return r.valor + r.id;
}
