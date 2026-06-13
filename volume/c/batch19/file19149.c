// fichero 19149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19149;

Registro19149 crear_registro19149(int id) {
    Registro19149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19149(Registro19149 r) {
    return r.valor + r.id;
}
