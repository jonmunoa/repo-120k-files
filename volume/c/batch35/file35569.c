// fichero 35569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35569;

Registro35569 crear_registro35569(int id) {
    Registro35569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35569(Registro35569 r) {
    return r.valor + r.id;
}
