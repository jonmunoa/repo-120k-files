// fichero 12877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12877;

Registro12877 crear_registro12877(int id) {
    Registro12877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12877(Registro12877 r) {
    return r.valor + r.id;
}
