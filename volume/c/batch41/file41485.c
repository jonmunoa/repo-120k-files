// fichero 41485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41485;

Registro41485 crear_registro41485(int id) {
    Registro41485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41485(Registro41485 r) {
    return r.valor + r.id;
}
