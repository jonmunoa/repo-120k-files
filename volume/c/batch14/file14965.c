// fichero 14965 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14965;

Registro14965 crear_registro14965(int id) {
    Registro14965 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14965(Registro14965 r) {
    return r.valor + r.id;
}
