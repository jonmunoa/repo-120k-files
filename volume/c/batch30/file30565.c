// fichero 30565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30565;

Registro30565 crear_registro30565(int id) {
    Registro30565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30565(Registro30565 r) {
    return r.valor + r.id;
}
