// fichero 35857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35857;

Registro35857 crear_registro35857(int id) {
    Registro35857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35857(Registro35857 r) {
    return r.valor + r.id;
}
