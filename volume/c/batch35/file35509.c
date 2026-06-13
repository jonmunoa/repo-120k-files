// fichero 35509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35509;

Registro35509 crear_registro35509(int id) {
    Registro35509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35509(Registro35509 r) {
    return r.valor + r.id;
}
