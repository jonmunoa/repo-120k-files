// fichero 36569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36569;

Registro36569 crear_registro36569(int id) {
    Registro36569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36569(Registro36569 r) {
    return r.valor + r.id;
}
