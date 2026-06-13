// fichero 44569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44569;

Registro44569 crear_registro44569(int id) {
    Registro44569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44569(Registro44569 r) {
    return r.valor + r.id;
}
