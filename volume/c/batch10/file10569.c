// fichero 10569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10569;

Registro10569 crear_registro10569(int id) {
    Registro10569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10569(Registro10569 r) {
    return r.valor + r.id;
}
